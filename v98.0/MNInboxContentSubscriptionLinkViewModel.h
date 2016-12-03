/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, MNPlainPhotoSource;

@interface MNInboxContentSubscriptionLinkViewModel : FBValueObject <NSCopying> {

	NSString* _linkId;
	NSString* _itemId;
	NSString* _unitId;
	NSURL* _url;
	MNPlainPhotoSource* _previewPhotoSource;

}

@property (nonatomic,copy,readonly) NSString * linkId;                                    //@synthesize linkId=_linkId - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemId;                                    //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitId;                                    //@synthesize unitId=_unitId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) MNPlainPhotoSource * previewPhotoSource;              //@synthesize previewPhotoSource=_previewPhotoSource - In the implementation block
-(NSString *)unitId;
-(NSString *)linkId;
-(id)initWithLinkId:(id)arg1 itemId:(id)arg2 unitId:(id)arg3 url:(id)arg4 previewPhotoSource:(id)arg5 ;
-(MNPlainPhotoSource *)previewPhotoSource;
-(NSURL *)url;
-(NSString *)itemId;
@end

