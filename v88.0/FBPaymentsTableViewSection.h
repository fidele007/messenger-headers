/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsTableViewSection <FBPaymentsEdgeInsetsConfigurable>
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@optional
-(void)acceptSectionConfiguration:(id)arg1;
-(id)sectionFooterView;
-(double)heightForSectionFooterViewWithWidth:(double)arg1;
-(void)setUp;

@required
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1;
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned long long)arg1;
-(double)heightForSectionRowAtIndex:(unsigned long long)arg1;
-(void)handleSelectActionForRowAtIndex:(unsigned long long)arg1;
-(unsigned long long)numberOfRows;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;
-(void)setSectionDelegate:(id)arg1;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;

@end
