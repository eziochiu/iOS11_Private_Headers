/* made by EzioChiu.
 */

@protocol PKGroupDelegate <NSObject>

@required

- (void)group:(PKGroup *)arg1 didInsertPass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didRemovePass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(PKGroup *)arg1 didUpdatePass:(PKPass *)arg2 atIndex:(unsigned long long)arg3;

@end