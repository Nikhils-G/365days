# Stack Implementation using Array

class Stack
  def initialize
    @stack = []
  end

  # Push element to the top
  def push(element)
    @stack.push(element)
    puts "#{element} pushed to stack"
  end

  # Pop element from the top
  def pop
    if empty?
      puts "Stack is empty"
    else
      popped = @stack.pop
      puts "#{popped} popped from stack"
    end
  end

  # Peek at the top element
  def peek
    if empty?
      puts "Stack is empty"
    else
      puts "Top element is #{@stack.last}"
    end
  end

  # Check if stack is empty
  def empty?
    @stack.empty?
  end

  # Display the stack
  def display
    puts "Stack: #{@stack.reverse}"
  end
end

# Using the Stack
stack = Stack.new
stack.push(10)
stack.push(20)
stack.push(30)
stack.display
stack.peek
stack.pop
stack.display
