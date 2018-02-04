/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate> {
    CertInfoCertificateSummaryDescriptionCell * _descriptionCell;
    NSDate * _expirationDate;
    CertInfoCertificateHeaderCell * _headerCell;
    id /* block */  _moreDetailsSelectedBlock;
    NSString * _purpose;
    UITableView * _tableView;
    NSString * _trustSubtitle;
    NSString * _trustTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CertInfoCertificateSummaryDescriptionCell *descriptionCell;
@property (nonatomic, retain) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CertInfoCertificateHeaderCell *headerCell;
@property (nonatomic, retain) NSString *purpose;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, retain) NSString *trustSubtitle;
@property (nonatomic, retain) NSString *trustTitle;

- (void).cxx_destruct;
- (id)_cellForReuseIdentifier:(id)arg1;
- (void)_configureCell:(id)arg1;
- (id)descriptionCell;
- (id)expirationDate;
- (id)headerCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)purpose;
- (void)setDescriptionCell:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHeaderCell:(id)arg1;
- (void)setMoreDetailsSelectedBlock:(id /* block */)arg1;
- (void)setPurpose:(id)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (void)setTrustTitle:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)trustSubtitle;
- (id)trustTitle;

@end