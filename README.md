# CPP - DesignPattern: Visitor

This repository demonstrates a practical implementation of the Visitor design pattern in C++, focusing on an animal care system.

## Project structure

The main components are:

- [`Animal`](animal.h) - Abstract base class for animals
- [`Visitor`](visitor.h) - Base visitor interface
- [`VetVisitor`](VetVisitor.h) - Specialized visitor for veterinary care
- [`CaregiverVisitor`](CaregiverVisitor.h) - Specialized visitor for daily care

In the example, we created 3 classes of Animal which are handled differently by both Visitors:

- [`Dog`](dog.h): considered hungry by the Caregiver if hungryLevel>5 and considered sick by the Vet if healthLevel<5
- [`Cat`](cat.h): considered hungry by the Caregiver if hungryLevel>3 and considered sick by the Vet if healthLevel<3
- [`Lion`](lion.h): considered hungry by the Caregiver if hungryLevel>2 and can't be diagnosed by the Vet
  
## Building the project

This is a C++ project. To build it, you'll need:

- A C++ compiler supporting C++11 or later
- CMake (recommended) or Make

Then, you will need to clone the project and change your working directory
Afterwards you can compile all files and launch the main function of the project:

```bash
make all

./main
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

## License

MIT License

Copyright (c) [2025] [CPP - DesignPattern : Visitor]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
