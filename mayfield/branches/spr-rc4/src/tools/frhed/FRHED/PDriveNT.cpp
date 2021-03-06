impleString s1;
	s1 += ps1;
	s1 += ps2;
	return SimpleString(s1);
}

//-------------------------------------------------------------------
SimpleString operator+( char* ps1, SimpleString ps2 )
{
	SimpleString s1;
	s1 += ps1;
	s1 += ps2;
	return SimpleString(s1);
}

//-------------------------------------------------------------------
template<class T> int SimpleArray<T>::Replace( int ToReplaceIndex, int ToReplaceLength, T* pReplaceWith, int ReplaceWithLength )
{
	if( m_pT != NULL && ToReplaceLength > 0 )
	{
		// Number of elements from start to end of array large enough for request?
		if( m_nUpperBound - ToReplaceIndex + 1 >= ToReplaceLength )
		{
			if( ToReplaceLength < ReplaceWithLength )
			{
				int i;
				T dummy;

				// Next line might cause problems if used with non-pure-binary
				// objects.
				dummy = 0;

				InsertAtGrow( ToReplaceIndex, dummy, ReplaceWithLength - ToReplaceLength );
				for( i = 0; i < ReplaceWithLength; i++ )
				{
					m_pT[ ToReplaceIndex + i ] = pReplaceWith[ i ];
				}

				return TRUE;
			}
			else if( ToReplaceLength == ReplaceWithLength )
			{
				int i;
				for( i = 0; i < ReplaceWithLength; i++ )
				{
					m_pT[ ToReplaceIndex + i ] = pReplaceWith[ i ];
				}
				return TRUE;
			}
			else // if( ToReplaceLength > ReplaceWithLength )
			{
				int i;
				for( i = 0; i < ReplaceWithLength; i++ )
				{
					m_pT[ ToReplaceIndex + i ] = pReplaceWith[ i ];
				}

				RemoveAt( ToReplaceIndex + ReplaceWithLength, ToReplaceLength - ReplaceWithLength );
				return TRUE;
			}
		}
		else
		{
			return FALSE;
		}
	}
	else
	{
		return FALSE;
	}
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       