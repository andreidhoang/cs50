from sqlalchemy import Column, Integer, String
from .database import Base

class Tweet(Base):
    __tablename__ = "tweets"

    id = Column(Integer, primary_key=True, nullable=False)
    headline = Column(String, nullable=False)
    tweet_content = Column(String, nullable=False)
    published = Column()
