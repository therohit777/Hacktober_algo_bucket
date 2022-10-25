
let mat:[[Int]] = [[1,2,3],
                   [4,5,6],
                   [7,8,9]]

struct Matrix {
    static func spiralOrder(_ matrix: [[Int]]) -> [Int] {
        let M = matrix.count
        let N = matrix.first!.count

        let rowStart = 0, rowEnd = M - 1
        let colStart = 0, colEnd = N - 1
        
        return recursiveSpiral(mat: matrix, rowStart: rowStart, rowEnd: rowEnd, colStart: colStart, colEnd: colEnd, result: [])
    }
    
    static func recursiveSpiral(mat:[[Int]], rowStart:Int, rowEnd:Int, colStart:Int, colEnd:Int, result:[Int]) -> [Int]{
        var res = result
        
        if rowStart > rowEnd || colStart > colEnd {
            return res
        }
        
        for i in colStart...colEnd{
            res.append(mat[rowStart][i])
        }
        
        if rowStart+1 <= rowEnd {
            for i in (rowStart+1)...rowEnd{
                res.append(mat[i][colEnd])
            }
        }
        
        if rowEnd != rowStart{
            for i in (colStart...(colEnd - 1)).reversed(){
                res.append(mat[rowEnd][i])
            }
        }
         
        if colEnd != colStart{
            for i in ((rowStart + 1)...(rowEnd - 1)).reversed(){
                res.append(mat[i][colStart])
            }
        }
        
        return recursiveSpiral(mat: mat, rowStart: rowStart + 1, rowEnd: rowEnd - 1, colStart: colStart + 1, colEnd: colEnd - 1, result: res)
    }
}

print(Matrix.spiralOrder(mat))

//[1, 2, 3, 6, 9, 8, 7, 4, 5]
