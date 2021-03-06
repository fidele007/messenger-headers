/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAssetProtocol;
#import <Messenger/Messenger-Structs.h>
@class NSString, NSDate, CLLocation, NSNumber;

@interface FBMagicStoryLocalAsset : NSObject {

	unsigned long long _assetType;
	id<FBAssetProtocol> _fbAsset;
	unsigned long long _indexHint;
	NSString* _cachedUniqueId;

}

@property (nonatomic,copy,readonly) id<FBAssetProtocol> fbAsset; 
@property (nonatomic,readonly) unsigned long long indexHint; 
@property (nonatomic,readonly) unsigned long long assetType; 
@property (nonatomic,copy,readonly) NSString * uniqueId; 
@property (nonatomic,readonly) CGSize dimensions; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSNumber * duration; 
+(id)assetForFbAsset:(id)arg1 indexHint:(unsigned long long)arg2 ;
-(unsigned long long)indexHint;
-(id<FBAssetProtocol>)fbAsset;
-(id)initWithFbAsset:(id)arg1 indexHint:(unsigned long long)arg2 assetType:(unsigned long long)arg3 ;
-(unsigned long long)assetType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)duration;
-(CLLocation *)location;
-(NSString *)uniqueId;
-(CGSize)dimensions;
-(NSDate *)creationDate;
@end

