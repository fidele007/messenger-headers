/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsMessageWithLinkView <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsMessageWithLinkViewDelegate> delegate; 
@required
+(double)heightWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2;
-(void)setMessageTextColor:(id)arg1;
-(void)setMessageTextFont:(id)arg1;
-(void)setOrderTemplate:(unsigned long long)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBPaymentsMessageWithLinkViewDelegate>)delegate;
-(void)setHorizontalAlignmentMode:(long long)arg1;

@end
