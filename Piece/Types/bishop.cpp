public class Bishop extends Piece { 
    public Bishop(boolean white) 
    { 
        super(white); 
    } 
  
    @Override
    public boolean canMove(Board board, Spot start, Spot end) 
    { 
        // we can't move the piece to a spot that has 
        // a piece of the same colour 
        if (end.getPiece().isWhite() == this.isWhite()) { 
            return false; 
        } 
	// Bishop can move diagonally    
	    if(Math.abs(start.getX()- end.getX())== Math.abs(start.getY() - end.getY()))
        {
            return true; 
        }
        return false;
    } 
}
