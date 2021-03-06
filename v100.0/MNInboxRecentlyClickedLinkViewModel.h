/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, MNPlainPhotoSource;

@interface MNInboxRecentlyClickedLinkViewModel : FBValueObject <NSCopying> {

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

