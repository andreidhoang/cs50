from fastapi import FastAPI, Response
from fastapi.params import Body
from pydantic import BaseModel

app = FastAPI()

class Tweet(BaseModel):
    tweet_headline: str
    tweet_content: str
    published: bool = True

my_tweets: list = [
    {
        "id": 1,
        "tweet_headline": "Elon",
        "tweet_content": "AI is the best invention",
        "published": True
    }
]

@app.get("/")
async def root():
    return {"message": "Hi"}
@app.get("/tweets")
async def get_tweets():
    return {"data": my_tweet}

@app.post("/createtweets")
def create_posts(tweet: Tweet):
    tweet_dict = tweet.dict()
    tweet_dict['id'] = 1
    my_tweets.append(tweet_dict)
    print(my_tweets)
    return {"data": tweet}

@app.get("/tweets/latest")
def get_latest():
    return {"data": my_tweets[len(my_tweets)-1]}


@app.get("/tweets/{id}") # path params
def get_post(id: int, response: Response):
    for p in my_tweets:
        if p['id'] == int(id):
            print(id)
            return {"data": p}
    return {"message": "not found"}

