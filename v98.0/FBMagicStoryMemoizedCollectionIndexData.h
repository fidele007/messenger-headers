/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSArray;

@interface FBMagicStoryMemoizedCollectionIndexData : FBValueObject <NSCopying, NSCoding> {

	NSURL* _latestAssetUrl;
	NSArray* _originalCollectionDataArray;
	NSArray* _classifiedCollectionDataArray;

}

@property (nonatomic,copy,readonly) NSURL * latestAssetUrl;                               //@synthesize latestAssetUrl=_latestAssetUrl - In the implementation block
@property (nonatomic,copy,readonly) NSArray * originalCollectionDataArray;                //@synthesize originalCollectionDataArray=_originalCollectionDataArray - In the implementation block
@property (nonatomic,copy,readonly) NSArray * classifiedCollectionDataArray;              //@synthesize classifiedCollectionDataArray=_classifiedCollectionDataArray - In the implementation block
-(NSArray *)classifiedCollectionDataArray;
-(id)initWithLatestAssetUrl:(id)arg1 originalCollectionDataArray:(id)arg2 classifiedCollectionDataArray:(id)arg3 ;
-(NSURL *)latestAssetUrl;
-(NSArray *)originalCollectionDataArray;
@end

