/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSSet, NSEnumerator, FBObjectiveCGraphElement;

@interface FBNodeEnumerator : NSEnumerator {

	NSSet* _retainedObjectsSnapshot;
	NSEnumerator* _enumerator;
	FBObjectiveCGraphElement* _object;

}

@property (nonatomic,readonly) FBObjectiveCGraphElement * object;              //@synthesize object=_object - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(FBObjectiveCGraphElement *)object;
-(id)nextObject;
-(id)initWithObject:(id)arg1 ;
@end
