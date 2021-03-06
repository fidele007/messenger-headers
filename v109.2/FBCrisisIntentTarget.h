/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBIntentTarget.h>

@class NSString, FBMemCrisis;

@interface FBCrisisIntentTarget : FBIntentTarget {

	NSString* _crisisID;

}

@property (nonatomic,copy,readonly) FBMemCrisis * crisisID; 
@property (nonatomic,copy,readonly) NSString * crisisID;                 //@synthesize crisisID=_crisisID - In the implementation block
+(id)crisisTargetWithCrisisID:(id)arg1 ;
+(id)crisisTargetWithCrisis:(id)arg1 ;
-(id)crisis;
-(FBMemCrisis *)crisisID;
-(id)fallbackURLs;
@end

