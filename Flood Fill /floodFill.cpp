vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    if(image[sr][sc] == color){
        return image;
    }
    fill(image, sr, sc, color, image[sr][sc]);
    return image;     
}
void fill(vector<vector<int>>& image, int sr, int sc, int color, int prev_color){
    if(sr < 0 || sc < 0 || image[0].size() <= sr|| image.size() <= sc || image[sr][sc] != prev_color){
        return;
    }   
    image[sr][sc] = color;
    fill(image, sr-1, sc, color, prev_color);
    fill(image, sr+1, sc, color, prev_color);
    fill(image, sr, sc-1, color, prev_color);
    fill(image, sr, sc+1, color, prev_color);
}
