/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, FBAssetLocationInfo, NSDictionary;

@interface FBMagicStoryCollectionBuilder : NSObject {

	NSArray* _assets;
	NSString* _uniqueId;
	unsigned long long _type;
	FBAssetLocationInfo* _locationInfo;
	double _classifierScore;
	NSDictionary* _classifierLoggingData;

}
+(id)magicStoryCollection;
+(id)magicStoryCollectionFromExistingMagicStoryCollection:(id)arg1 ;
-(id)withType:(unsigned long long)arg1 ;
-(id)withAssets:(id)arg1 ;
-(id)withUniqueId:(id)arg1 ;
-(id)withLocationInfo:(id)arg1 ;
-(id)withClassifierScore:(double)arg1 ;
-(id)withClassifierLoggingData:(id)arg1 ;
-(id)build;
@end

