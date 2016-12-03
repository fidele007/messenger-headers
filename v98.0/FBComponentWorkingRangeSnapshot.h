/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWorkingRangeSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBComponentWorkingRangeSnapshot : NSObject <FBWorkingRangeSnapshot, NSCopying> {

	NSArray* _itemViewStates;
	double _timestamp;
	/*^block*/id _completionBlock;
	CGRect _visibleBounds;

}

@property (nonatomic,copy,readonly) id completionBlock;                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect visibleBounds;                       //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemViewStates;              //@synthesize itemViewStates=_itemViewStates - In the implementation block
@property (nonatomic,readonly) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
-(NSArray *)itemViewStates;
-(id)initWithVisibleBounds:(CGRect)arg1 itemViewStates:(id)arg2 timestamp:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(double)timestamp;
-(id)completionBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)visibleBounds;
@end

