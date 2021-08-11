import asyncio
import websockets
import websockets.exceptions as exc

async def greetingHandler(websocket, path):

 try:
  name = await websocket.recv()
 except (exc.ConnectionClosedError):
  print("[SERVER]: Connection has been donged up")
 else:

  print(f"< {name}")
  greeting = f"Hello, {name}!"

  await websocket.send(greeting)
  print(f"> {greeting}")

if __name__ == '__main__':
 start_server = websockets.serve(greetingHandler, 'localhost', 8888)

 asyncio.get_event_loop().run_until_complete(start_server)
 asyncio.get_event_loop().run_forever()