/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCallPath.h>

@protocol FBCallPath;
@class NSString;

@interface FBCallPathSegmentHolderBase : NSObject <FBCallPath> {

	NSString* _analyticsTag;
	NSString* _moduleAnalyticsTag;
	NSString* _featureTag;
	id<FBCallPath> _parent;

}

@property (nonatomic,readonly) id<FBCallPath> parent;                           //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * analyticsTag;                    //@synthesize analyticsTag=_analyticsTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * moduleAnalyticsTag;              //@synthesize moduleAnalyticsTag=_moduleAnalyticsTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureTag;                      //@synthesize featureTag=_featureTag - In the implementation block
-(id)tagSet;
-(NSString *)analyticsTag;
-(id)computeCallPath;
-(NSString *)moduleAnalyticsTag;
-(NSString *)featureTag;
-(id)segmentString;
-(id)initWithParent:(id)arg1 analyticsTag:(id)arg2 moduleAnalyticsTag:(id)arg3 featureTag:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<FBCallPath>)parent;
@end

