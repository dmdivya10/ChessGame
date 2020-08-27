public class Hook extends Piece { 
    public Hook(boolean white) 
    { 
        super(white); 
    } 
  
    @Override
    public boolean canMove(Board board, Spot start, Spot end) 
    { 
        // we can't move the piece to a spot that has 
        // a piece of the same colour 
        if (end.getPiece().isWhite() == this.isWhite())
        { 
            return false; 
        } 
	 // hook can move horizonatally or vertically straight
	  if(start.getX()==end.getX()||start.getY() == end.getY()
          {
	     return true; 
          }
          return false;
    } 
} 
