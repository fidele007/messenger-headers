/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponent.h>

@class FIGAnnouncingNetworkImageSpecifier;

@interface FIGAnnouncingNetworkImageComponent : CKComponent {

	FIGAnnouncingNetworkImageSpecifier* _specifier;
	CKTypedComponentAction<> _imageDownloadedAction;

}

@property (nonatomic,readonly) CKTypedComponentAction<> imageDownloadedAction;              //@synthesize imageDownloadedAction=_imageDownloadedAction - In the implementation block
@property (nonatomic,retain) FIGAnnouncingNetworkImageSpecifier * specifier;                //@synthesize specifier=_specifier - In the implementation block
+(id)newWithURL:(id)arg1 imageDownloader:(id)arg2 scenePath:(id)arg3 size:(const CKComponentSize*)arg4 options:(const FIGAnnouncingNetworkImageComponentOptions*)arg5 attributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg6 ;
-(CKTypedComponentAction<>)imageDownloadedAction;
-(FIGAnnouncingNetworkImageSpecifier *)specifier;
-(void)setSpecifier:(FIGAnnouncingNetworkImageSpecifier *)arg1 ;
@end

