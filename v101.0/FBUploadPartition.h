/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBAVAssetSegment, NSString;

@interface FBUploadPartition : NSObject <NSCoding> {

	FBAVAssetSegment* _segment;
	unsigned long long _startOffset;
	unsigned long long _endOffset;
	NSString* _relativeSegmentCachePath;

}

@property (nonatomic,retain) FBAVAssetSegment * segment;                     //@synthesize segment=_segment - In the implementation block
@property (nonatomic,readonly) unsigned long long startOffset;               //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long endOffset;                 //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,copy) NSString * relativeSegmentCachePath;              //@synthesize relativeSegmentCachePath=_relativeSegmentCachePath - In the implementation block
+(id)_getCachePath;
+(id)_getCacheUrl;
+(id)newWithAssetSegment:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)segmentSize;
-(void)setSegment:(FBAVAssetSegment *)arg1 ;
-(NSString *)relativeSegmentCachePath;
-(void)setRelativeSegmentCachePath:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)endOffset;
-(unsigned long long)startOffset;
-(FBAVAssetSegment *)segment;
@end

