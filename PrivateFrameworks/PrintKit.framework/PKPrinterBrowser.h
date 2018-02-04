/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKPrinterBrowser : NSObject <PKBrowserClientProtocol> {
    NSMutableDictionary * _btDevices;
    <PKPrinterBrowserDelegate> * _delegate;
    bool  _delegateRespondsToProximityUpdate;
    unsigned char  _originalCellFlag;
    unsigned char  _originalWifiFlag;
    NSXPCConnection * _pkBrowseConnection;
    NSMutableDictionary * _printers;
}

@property (nonatomic, retain) NSMutableDictionary *btDevices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPrinterBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *pkBrowseConnection;
@property (nonatomic, retain) NSMutableDictionary *printers;
@property (readonly) Class superclass;

+ (id)browserWithDelegate:(id)arg1;

- (void)aggdDiscoveredPrinterStatistics;
- (id)btDevices;
- (void)btlePrinterFound:(id)arg1;
- (void)btleRssiUpdated:(id)arg1 rssi:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)pkBrowseConnection;
- (void)printerAdded:(id)arg1 more:(bool)arg2;
- (void)printerRemoved:(id)arg1 more:(bool)arg2;
- (id)printers;
- (void)setBtDevices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPkBrowseConnection:(id)arg1;
- (void)setPrinters:(id)arg1;

@end