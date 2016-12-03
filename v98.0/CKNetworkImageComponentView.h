/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIImageView.h>

@class CKNetworkImageSpecifier;

@interface CKNetworkImageComponentView : UIImageView {

	BOOL _inReusePool;
	id _download;
	CKNetworkImageSpecifier* _specifier;

}

@property (nonatomic,retain) CKNetworkImageSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(void)updateContentsRect;
-(void)_startDownloadIfNotInReusePool;
-(void)didDownloadImage:(CGImageRef)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CKNetworkImageSpecifier *)specifier;
-(void)setSpecifier:(CKNetworkImageSpecifier *)arg1 ;
@end

