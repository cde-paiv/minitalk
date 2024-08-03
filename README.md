<h1 align="center"> <br> Minitalk </br></h1>

This project consists of a simple client-server communication system, implemented using signals in C. The client is responsible for sending a message to the server, which, in turn, receives and displays the message character by character. The implementation stands out for its efficient use of signals to coordinate data transmission and reception, demonstrating a basic but effective interprocess communication mechanism in the C programming environment.

<div align="center">
	<h1>How to run</h1>
</div>

1 - Clone

```bash
$ git@github.com:cde-paiv/minitalk.git
```

2 - Compile the program

```bash
$ make
```

3 - Run server

```bash
$ ./server
```

4 - Run client
"At this point, you must use the PID that was displayed on the server and send a string."
```bash
$ ./client <server_pid> "TEXT"
```
<br>
