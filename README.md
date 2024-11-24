# Image to ASCII Converter

This project converts an image into ASCII art that can be displayed directly in the terminal.

## Features
- Takes an image file as input.
- Converts the image to grayscale.
- Displays the image as ASCII art in the terminal using different characters based on pixel brightness.

## Prerequisites
- OpenCV (for image processing)
- A C++ compiler (such as `g++`)

## Installation and Setup

1. **Clone the repository:**

   ```bash
   git clone https://github.com/your-username/image-to-ascii.git
   cd image-to-ascii
2. **Install OpenCV**
    If OpenCV is not already installed on your system, follow the installation instructions for your operating system:

 Linux (Ubuntu/Debian):

sudo apt-get update
sudo apt-get install libopencv-dev

macOS:

brew install opencv

Windows: Follow the instructions in the OpenCV installation guide.   

3. **Compile the code**
   g++ -o image-to-ascii main.cpp `pkg-config --cflags --libs opencv4`

4. **Run the Program**
   ./image-to-ascii /path/to/your/image.jpg

Replace /path/to/your/image.jpg with the actual path to the image you want to convert.


