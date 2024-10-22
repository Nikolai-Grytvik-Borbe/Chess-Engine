# Chess-Engine
> Highly optimized chess-engine built in C

## Description
A highly optimized chess engine written in C, primarily using bit manipulation for the logic. The goal of the project is to make the engine as fast as possible. As a result, much of the C code may be difficult to read, but I’ve made an effort to document the functions thoroughly.


## Requirements
- Python 3.4+
- GCC 10.2+

See [requirements.txt](https://github.com/Nikolai-Grytvik-Borbe/Chess-Engine/blob/main/requirements.txt) for more info about python packages used.

## Installation
### Preface

Ensure that you have installed **Python 3** and **GCC** before attempting to install.

### Fast install

##### macOS

```
git clone https://github.com/Nikolai-Grytvik-Borbe/Chess-Engine.git
cd Chess-Engine
python3 -m venv venv
source venv/bin/activate
pip install -r requirements.txt
python main.py
```


##### Windows

```
git clone https://github.com/Nikolai-Grytvik-Borbe/Chess-Engine.git
cd Chess-Engine
python -m venv venv
venv\Scripts\activate
pip install -r requirements.txt
python main.py
```


### Clone the project

Make sure you have `git` installed on your system.

To clone the project with HTTPS, run:

    $ git clone https://github.com/Nikolai-Grytvik-Borbe/Chess-Engine.git
    $ cd Chess-Engine


### Setup virtual environment for `python`

To setup venv, run:

#### macOS

    $ python3 -m venv venv 
    $ source venv/bin/activate


#### Windows

    $ python -m venv venv 
    $ venv\Scripts\activate


### Install dependencies using `pip`

To install dependencies, run:

    $ pip install -r requirements.txt

This will install all the python packages needed to run the project.


### Run the project

Make sure the virtual environment is active.

Run to project with:

    $ python main.py


## Roadmap
- [ ] Setup the C engine with python.
- [ ] Write documentations.
- [ ] Create a demo for the project and add to README.md.
- [ ] Create a "Features" in the README.md.
- [ ] Write tests.
