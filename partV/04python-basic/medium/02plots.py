# esta funcionando pero se tarda mucho

import pylab

pylab.figure(1)
pylab.plot([1,2,3,4],[1,7,3,5])
pylab.figure(2)
pylab.plot([1,4,2,3],[5,6,7,8])
pylab.savefig("figure-addie")
pylab.figure(1)
pylab.plot([5,6,10,3])
pylab.savefig("figure-jane")

pylab.show()
