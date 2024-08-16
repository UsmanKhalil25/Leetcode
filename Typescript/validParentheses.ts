class Stack<T> {
  private _arr: Array<T>;
  private _size: number;

  constructor() {
    this._arr = [];
    this._size = 0;
  }

  push(item: T) {
    this._arr.push(item);
    this._size += 1;
  }

  pop() {
    if (!this.empty()) {
      this._arr.pop();
      this._size -= 1;
    }
  }

  top(): T | null {
    if (!this.empty()) {
      return this._arr[this._size - 1];
    }
    return null;
  }

  empty() {
    return this._size === 0;
  }
}

function isValid(s: string): boolean {
  const stack = new Stack<string>();
  for (const ch of s) {
    if (ch === "(" || ch === "{" || ch === "[") {
      stack.push(ch);
    } else if (!stack.empty()) {
      const stackTop = stack.top();
      if (
        (stackTop === "(" && ch === ")") ||
        (stackTop === "{" && ch === "}") ||
        (stackTop === "[" && ch === "]")
      ) {
        stack.pop();
      } else {
        return false;
      }
    } else {
      return false;
    }
  }

  return stack.empty();
}
