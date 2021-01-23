class Solution {
private:
    struct diagonalIterator {
        using iterator_category = random_access_iterator_tag;
        using difference_type   = int;
        using value_type        = int;
        using pointer           = int*;
        using reference         = int&;
        
        diagonalIterator(vector<vector<int>> *mat, const int starty, const int startx) :
            mat(mat), curx(startx), cury(starty)
        {
        }
        
        reference operator*() const {
            return (*mat)[cury][curx];
        }
        pointer operator->() { return &(*mat)[cury][curx]; }
        
        diagonalIterator& operator++() {
            curx++;
            cury++;
            return *this;
        }  
        diagonalIterator operator++(int) {
            diagonalIterator tmp = *this;
            ++(*this);
            return tmp;
        }
        diagonalIterator& operator--() {
            curx--;
            cury--;
            return *this;
        } 
        
        bool operator==(const diagonalIterator &that) const {
            return this->curx==that.curx && this->cury==that.cury;
        }
        bool operator!=(const diagonalIterator &that) const {
            return this->curx!=that.curx || this->cury!=that.cury;
        }
        difference_type operator-(const diagonalIterator &that) const {
            return this->curx - that.curx;
        }
        bool operator<(const diagonalIterator &that) const {
            return this->curx < that.curx;
        }
        diagonalIterator operator+(const int n) const {
            return diagonalIterator(mat, cury+n, curx+n);
        }
        diagonalIterator operator-(const int n) const {
            return diagonalIterator(mat, cury-n, curx-n);
        }
        
    private:
        vector<vector<int>> *mat;
        int curx;
        int cury;
    };

    diagonalIterator dbegin(vector<vector<int>> &mat, const int starty, const int startx) {
        return diagonalIterator(&mat, starty, startx);
    }
    
    diagonalIterator dend(vector<vector<int>> &mat, const int starty, const int startx) {
        const int delta = min(mat.size()-starty, mat[0].size()-startx);
        return diagonalIterator(&mat, starty+delta, startx+delta);
    }
    
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int i=0; i<mat.size(); i++) {
            sort(dbegin(mat, i, 0), dend(mat, i, 0));
        }
        for(int i=1; i<mat[0].size(); i++) {
            sort(dbegin(mat, 0, i), dend(mat, 0, i));
        }
        
        return mat;
    }
};
