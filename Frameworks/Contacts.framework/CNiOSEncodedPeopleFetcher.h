/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor> {
    void * _addressBook;
    id /* block */  _completionHandler;
    CNContactFetchRequest * _contactFetchRequest;
    <CNEncodedFetchCursor> * _cursor;
    CNContactsEnvironment * _environment;
    <CNContactsLogger> * _logger;
}

@property (nonatomic, readonly) void*addressBook;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) CNContactFetchRequest *contactFetchRequest;
@property (nonatomic, readonly) <CNEncodedFetchCursor> *cursor;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (nonatomic, readonly) <CNContactsLogger> *logger;

- (void).cxx_destruct;
- (void*)addressBook;
- (id /* block */)completionHandler;
- (id)contactFetchRequest;
- (id)cursor;
- (id)cursorWithError:(id*)arg1;
- (void)dealloc;
- (id)environment;
- (bool)fetchEncodedPeopleWithError:(id*)arg1 cancelationToken:(id)arg2 batchHandler:(id /* block */)arg3;
- (void)fetchNextBatchWithReply:(id /* block */)arg1;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 completionHandler:(id /* block */)arg3 environment:(id)arg4;
- (id)logger;

@end
