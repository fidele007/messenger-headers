/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRideServiceSurgeInfo : FBValueObject <NSCopying> {

	double _surgeValue;
	double _surgeThreshold;
	NSString* _surgeDescription;
	NSString* _surgeId;

}

@property (nonatomic,readonly) double surgeValue;                             //@synthesize surgeValue=_surgeValue - In the implementation block
@property (nonatomic,readonly) double surgeThreshold;                         //@synthesize surgeThreshold=_surgeThreshold - In the implementation block
@property (nonatomic,copy,readonly) NSString * surgeDescription;              //@synthesize surgeDescription=_surgeDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * surgeId;                       //@synthesize surgeId=_surgeId - In the implementation block
-(id)initWithSurgeValue:(double)arg1 surgeThreshold:(double)arg2 surgeDescription:(id)arg3 surgeId:(id)arg4 ;
-(double)surgeValue;
-(double)surgeThreshold;
-(NSString *)surgeDescription;
-(NSString *)surgeId;
@end

