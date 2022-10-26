private extension Int{
    var isRoot: Bool {
        return self == 0
    }
    var parentIndex: Int {
        return (self - 1) / 2
    }
    var leftChildIndex: Int {
        return (self * 2) + 1
    }
    var rightChildIndex: Int {
        return (self * 2) + 2
    }
}

extension Array where Element: Comparable {
    mutating func heapSort(){
        build()
        srink()
    }
    
    private mutating func build(){
        for i in 1..<self.count{
            var child = i
            var parent = child.parentIndex
            while child > 0 && self[child] > self[parent]{
                swapAt(child, parent)
                child = parent
                parent = child.parentIndex
            }
        }
    }
    
    private mutating func srink(){
        for i in stride(from: self.count - 1, to: 0, by: -1){
            swapAt(0, i)
            var parent = 0
            var leftChild = parent.leftChildIndex
            var rightChild = parent.rightChildIndex
            while parent < i {
                var maxChild = -1
                if leftChild < i {
                    maxChild = leftChild
                }else{
                    break
                }
                if rightChild < i && self[rightChild] > self[maxChild] {
                    maxChild = rightChild
                }
                if self[maxChild] > self[parent]{
                    swapAt(parent, maxChild)
                    parent = maxChild
                    leftChild = parent.leftChildIndex
                    rightChild = parent.rightChildIndex
                }else{
                    break
                }
            }
        }
    }
}

var array = [5,13,2,25,7,17,20,8,4]
array.heapSort()
print(array)

