from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker
from sqlalchemy.ext.declarative import declarative_base
from app.core.config import settings # Import the settings instance

# Create the SQLAlchemy engine using the computed URI
engine = create_engine(
    "settings.database_uri",
    pool_pre_ping=True # Recommended practice
)

# Create a session factory
SessionLocal = sessionmaker(autocommit=False, autoflush=False, bind=engine)

# Create a base class for declarative models
Base = declarative_base()

# Dependency to get DB session 
def get_db():
    
    """
    FastAPI dependency that provides a SQLAlchemy database session.
    Ensures the session is closed after the request is finished.
    """
    
    db = SessionLocal()
    try:
        yield db
    finally:
        db.close() 