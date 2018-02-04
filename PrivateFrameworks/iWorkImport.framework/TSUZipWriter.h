/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUZipWriter : NSObject {
    unsigned int  _CRCToMatch;
    bool  _calculateCRC;
    bool  _calculateSize;
    NSObject<OS_dispatch_queue> * _channelQueue;
    TSUZipWriterEntry * _currentEntry;
    long long  _currentOffset;
    NSMutableArray * _entries;
    NSMutableDictionary * _entriesMap;
    unsigned long long  _entryDataSize;
    NSMutableArray * _entryDatas;
    NSError * _error;
    bool  _force32BitSize;
    bool  _isClosed;
    NSDate * _lastModificationDateIfSizeAndCRCMatches;
    NSObject<OS_dispatch_data> * _localFileHeaderData;
    NSDate * _newEntryLastModificationDate;
    unsigned long long  _options;
    unsigned long long  _sizeToMatch;
    <TSURandomWriteChannel> * _writeChannel;
    NSObject<OS_dispatch_semaphore> * _writeChannelCompletionSemaphore;
    long long  _writeChannelOnceToken;
    NSObject<OS_dispatch_queue> * _writeQueue;
    long long  _writtenOffset;
}

@property (nonatomic, readonly) unsigned long long archiveLength;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)addData:(id)arg1;
- (void)addData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)archiveLength;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(bool)arg6;
- (void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(bool)arg6;
- (void)closeWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)entryWithName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (void)finishEntry;
- (void)flushEntryData;
- (void)handleWriteError:(id)arg1;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (void)p_writeData:(id)arg1 offset:(long long)arg2 completion:(id /* block */)arg3;
- (id)prepareWriteChannelWithCloseCompletionHandler:(id /* block */)arg1;
- (void)writeCentralDirectory;
- (void)writeCentralFileHeaderDataForEntry:(id)arg1;
- (id)writeChannel;
- (void)writeData:(id)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(bool)arg2 fromReadChannel:(id)arg3 completion:(id /* block */)arg4;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 completion:(id /* block */)arg7;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 writeHandler:(id /* block */)arg7;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;

@end