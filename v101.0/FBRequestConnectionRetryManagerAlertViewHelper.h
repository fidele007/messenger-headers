/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface FBRequestConnectionRetryManagerAlertViewHelper : NSObject <UIAlertViewDelegate> {

	/*^block*/id _callback;

}

@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end
