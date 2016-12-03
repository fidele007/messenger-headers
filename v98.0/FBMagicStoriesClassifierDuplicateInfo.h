/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMagicStoriesClassifierDuplicateInfo : FBValueObject <NSCopying> {

	NSString* _assetIDA;
	NSString* _assetIDB;
	double _dupeCoefficient;

}

@property (nonatomic,copy,readonly) NSString * assetIDA;              //@synthesize assetIDA=_assetIDA - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetIDB;              //@synthesize assetIDB=_assetIDB - In the implementation block
@property (nonatomic,readonly) double dupeCoefficient;                //@synthesize dupeCoefficient=_dupeCoefficient - In the implementation block
-(NSString *)assetIDA;
-(NSString *)assetIDB;
-(double)dupeCoefficient;
-(id)initWithAssetIDA:(id)arg1 assetIDB:(id)arg2 dupeCoefficient:(double)arg3 ;
@end

