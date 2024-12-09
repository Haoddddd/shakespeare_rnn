CXX = nvcc
CXXFLAGS = -m64 \
           -gencode=arch=compute_60,code=sm_60 \
           -gencode=arch=compute_61,code=sm_61 \
           -gencode=arch=compute_70,code=sm_70 \
           -gencode=arch=compute_70,code=compute_70

# Pattern rule to build .out from .o
%.out: %.o
	$(CXX) -O3 --cudart shared -o $@ $<

# Pattern rule to build .o from .cu
%.o: %.cu
	$(CXX) $(CXXFLAGS) -O3 -c $< -o $@

# Pattern rule to generate an objdump file for debugging/disassembly
%.objdump: %
	objdump -Mno-aliases -Mnumeric --disassemble-all --disassemble-zeroes $< > $@

clean:
	rm -f *.out *.o *.objdump
