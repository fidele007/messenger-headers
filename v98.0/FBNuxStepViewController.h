/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNuxStepViewController <NSObject>
@property (assign,nonatomic,__weak) id<FBNUXViewControllerDelegate> delegate; 
@property (assign,nonatomic) unsigned long long interfaceOrientationMask; 
@required
-(id)initWithStep:(id)arg1;
-(void)transitionToSubStep:(id)arg1;
-(void)setStepProgress:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2;
-(void)setDelegate:(id)arg1;
-(id<FBNUXViewControllerDelegate>)delegate;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1;
-(unsigned long long)interfaceOrientationMask;

@end
