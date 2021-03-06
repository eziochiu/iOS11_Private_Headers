/* made by EzioChiu.
 */

@protocol TITransientLexiconManaging <TIKeyboardActivityObserving>

@required

- (id /* block */)addContactObserver:(void *)arg1; // needs 1 arg types, found 11: id /* block */, struct NSDictionary { Class x1; }*, void*, id, SEL, id /* block */, void*, void, id /* block */, struct NSDictionary { Class x1; }*, void*
- (void)debugLogEntities;
- (void)getOnce:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct NSDictionary { Class x1; }*, void*
- (void)loadLexicons;
- (const struct _LXLexicon { }*)namedEntityLexicon;
- (const struct _LXLexicon { }*)namedEntityPhraseLexicon;
- (void)removeContactObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct NSDictionary { Class x1; }*, void*
- (bool)searchForWord:(NSString *)arg1;
- (bool)searchForWordCaseInsensitive:(NSString *)arg1;

@end
