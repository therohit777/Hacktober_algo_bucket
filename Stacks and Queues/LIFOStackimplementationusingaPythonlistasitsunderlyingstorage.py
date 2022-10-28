
class StackADT:
   
    def __init__(self):
        self.data = []
 
    def push(self, e):
        self.data.append(e)
 

    def pop(self):
        if self.is_empty():
            raise IndexError('Stack is empty')
        else:
            return self.data.pop()
 
    
    def peek(self):
        if self.is_empty():
            raise IndexError('Stack is empty')
        else:
            return self.data[-1]
 

    def is_empty(self):
        return len(self.data) == 0
 
    def size(self):
        return len(self.data)
 
 
S = StackADT()
S.push("S")
S.push("T")
S.push("A")
S.push("C")
S.push("K")
S.peek()       # K
S.size()       # 5
S.is_empty()   # False
S.pop()        # K
S.pop()        # C
S.pop()        # A
S.pop()        # T
S.pop()        # S
S.is_empty()   # True
S.size()       # 0
S.peek()       # IndexError: Stack is empty
 
