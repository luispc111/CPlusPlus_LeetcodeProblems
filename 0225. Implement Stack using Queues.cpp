class MyStack {
public:
    /** Initialize your data structure here. */
    
    queue<int> q;
    queue<int> aux;
    int var;
    
    MyStack() {
        while(!q.empty()){
            q.pop();
        }
        while(!aux.empty()){
            aux.pop();
        }
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(!q.empty()){
            aux.push(q.front());
            q.pop();
        }
        while(!aux.empty()){
            if(aux.size()==1){
                var = aux.front();
            }
            else{
                q.push(aux.front());
            }
            aux.pop();
        }
        return var;
    }
    
    /** Get the top element. */
    int top() {
        while(!q.empty()){
            aux.push(q.front());
            q.pop();
        }
        while(!aux.empty()){
            
            if(aux.size()==1){
                var = aux.front();
            }
            q.push(aux.front());
            aux.pop();
        }
        return var;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
