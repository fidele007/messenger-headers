/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRapidReportingUIProvider.h>

@class NSString;

@interface FBRapidReportingDefaultUIProvider : NSObject <FBRapidReportingUIProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttons:(vector<FBRapidReportingUIAlertButton, std::__1::allocator<FBRapidReportingUIAlertButton> >*)arg3 inWindow:(id)arg4 ;
-(id)createActionButtonWithLabel:(id)arg1 style:(int)arg2 tapAction:(SEL)arg3 isDisabled:(BOOL)arg4 ;
-(id)colorOfKind:(int)arg1 ;
@end

