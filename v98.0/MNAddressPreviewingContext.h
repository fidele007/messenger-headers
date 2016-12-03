/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAddressPreviewingData, NSArray;

@interface MNAddressPreviewingContext : FBValueObject <NSCopying> {

	MNAddressPreviewingData* _previewingData;
	unsigned long long _defaultActionItemsFlag;
	NSArray* _customActionItems;
	CGRect _sourceRect;

}

@property (nonatomic,copy,readonly) MNAddressPreviewingData * previewingData;              //@synthesize previewingData=_previewingData - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultActionItemsFlag;                  //@synthesize defaultActionItemsFlag=_defaultActionItemsFlag - In the implementation block
@property (nonatomic,copy,readonly) NSArray * customActionItems;                           //@synthesize customActionItems=_customActionItems - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                                          //@synthesize sourceRect=_sourceRect - In the implementation block
-(id)initWithPreviewingData:(id)arg1 defaultActionItemsFlag:(unsigned long long)arg2 customActionItems:(id)arg3 sourceRect:(CGRect)arg4 ;
-(MNAddressPreviewingData *)previewingData;
-(unsigned long long)defaultActionItemsFlag;
-(NSArray *)customActionItems;
-(CGRect)sourceRect;
@end

