/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsContactInfoSectionSelectActionProviding <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsContactInfoSectionSelectActionProvidingDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldHideMakeAsDefaultSection; 
@required
-(void)selectContactData:(id)arg1 withTotalNumberOfContacts:(long long)arg2;
-(BOOL)shouldHideMakeAsDefaultSection;
-(void)setShouldHideMakeAsDefaultSection:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBPaymentsContactInfoSectionSelectActionProvidingDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end
