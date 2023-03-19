# Push_swap

This is a sorting algorithm project developed at 1337 school. The program takes an unsorted stack of integers and sorts them in ascending order, using two stacks and a set of operations. The project aims to improve algorithmic skills and optimize code performance. 

## Usage

1. Clone the repository: `git clone https://github.com/<abdelhamidbouazi>/Push_Swap.git`
2. Build the program: `make`
3. Execute with a list of integers: `./push_swap 3 1 4 2`

## Rules

- Two stacks (A and B) are used to sort the list of integers.
- Only a limited set of operations (swap, push, rotate, and reverse rotate) are allowed.
- The goal is to sort the stack in ascending order with the lowest number of operations possible.

## Algorithm

The algorithm is a custom implementation of quicksort and insertion sort. The program selects a pivot, partitions the list into two sub-lists, and recursively sorts each sub-list. For small sub-lists, the program uses insertion sort to reduce the number of operations.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
