/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@protocol FBPaymentsPayableDataModel;
@class NSObject, UINavigationController;

@interface FBPaymentsCheckoutIntentTarget : FBIntentTarget {

	NSObject*<FBPaymentsPayableDataModel> _checkoutDataModel;
	long long _presentingStyle;
	long long _dismissingStyle;
	UINavigationController* _navigationController;

}

@property (nonatomic,copy,readonly) NSObject*<FBPaymentsPayableDataModel> checkoutDataModel;              //@synthesize checkoutDataModel=_checkoutDataModel - In the implementation block
@property (nonatomic,readonly) long long presentingStyle;                                                 //@synthesize presentingStyle=_presentingStyle - In the implementation block
@property (nonatomic,readonly) long long dismissingStyle;                                                 //@synthesize dismissingStyle=_dismissingStyle - In the implementation block
@property (nonatomic,__weak,readonly) UINavigationController * navigationController;                      //@synthesize navigationController=_navigationController - In the implementation block
+(id)checkoutIntentTargetWithDataModel:(id)arg1 presentingStyle:(long long)arg2 dismissingStyle:(long long)arg3 toNavigationController:(id)arg4 ;
-(id)fallbackURLs;
-(NSObject*<FBPaymentsPayableDataModel>)checkoutDataModel;
-(long long)presentingStyle;
-(long long)dismissingStyle;
-(BOOL)isEqual:(id)arg1 ;
-(UINavigationController *)navigationController;
@end

