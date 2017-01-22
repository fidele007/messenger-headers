/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface FBFeedVPVdBuilder : NSObject {

	double _duration;
	unsigned long long _hScrollIndex;
	unsigned long long _storyHeight;
	NSArray* _trackingCodes;
	NSString* _deduplicationKey;
	long long _storyPosition;
	NSArray* _ctaIdentifiers;
	NSString* _debugIdentifier;

}
+(id)feedVPVd;
+(id)feedVPVdFromExistingFeedVPVd:(id)arg1 ;
-(id)withDuration:(double)arg1 ;
-(id)withHScrollIndex:(unsigned long long)arg1 ;
-(id)withStoryHeight:(unsigned long long)arg1 ;
-(id)withTrackingCodes:(id)arg1 ;
-(id)withDeduplicationKey:(id)arg1 ;
-(id)withStoryPosition:(long long)arg1 ;
-(id)withCtaIdentifiers:(id)arg1 ;
-(id)withDebugIdentifier:(id)arg1 ;
-(id)build;
@end
