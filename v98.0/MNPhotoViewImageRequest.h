/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCancelable.h>

@protocol FBCancelable;
@class MNPhotoViewImageDownloadController, MNPhotoView;

@interface MNPhotoViewImageRequest : NSObject <FBCancelable> {

	MNPhotoViewImageDownloadController* _photoViewImageDownloadController;
	BOOL _canceled;
	id _plainImageRequestToken;
	id<FBCancelable> _secureImageRequestCanceler;
	MNPhotoView* _photoView;

}

@property (nonatomic,retain) id plainImageRequestToken;                                //@synthesize plainImageRequestToken=_plainImageRequestToken - In the implementation block
@property (nonatomic,retain) id<FBCancelable> secureImageRequestCanceler;              //@synthesize secureImageRequestCanceler=_secureImageRequestCanceler - In the implementation block
@property (assign,nonatomic,__weak) MNPhotoView * photoView;                           //@synthesize photoView=_photoView - In the implementation block
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                        //@synthesize canceled=_canceled - In the implementation block
-(id)initWithPhotoViewImageDownloadController:(id)arg1 photoView:(id)arg2 ;
-(id)plainImageRequestToken;
-(void)setPlainImageRequestToken:(id)arg1 ;
-(id<FBCancelable>)secureImageRequestCanceler;
-(void)setSecureImageRequestCanceler:(id<FBCancelable>)arg1 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)isCanceled;
-(void)setPhotoView:(MNPhotoView *)arg1 ;
-(MNPhotoView *)photoView;
@end

