/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol MNThreadMessagesGenerator, MNMessageCellRegistration, MNPluginManager, MNSecureMessagingDeviceInformation, MNModalPresentation, MNInviteEligibilityChecking;
@class FBProviderMapData, NSMutableDictionary, FBUserSession, MNMessagesModelController, FBMThreadMessageSender, FBMThreadMessageSenderListeningAnnouncer, FBMMessageSendListeningAnnouncer, MNMessageCellController, MNComposerTransitionPerfLogger, MNMessageSendExperienceTracker, MNComposerInteractionCoordinator, MNThreadTypingStateSender, MNUserSettings, FBMobileConfigContextManager, MNThreadNullStateCTAViewController, MNSoundController, MNThreadSoundPlayer, MNThreadEphemeralitySetter, MNEphemeralMessagePolicy, MNEphemeralMessagingMessagesViewCoordinator, MNWebRTCMessagesViewCallController, MNBotComposerCoordinator, MNLastActiveBannerController, MNMessageSendPerfLogger, MNThreadParticipantNameFormatter, MNMessageRawSnippetFormatter, FBEmoticonTranslator, MNPendingThreadRequestListeningAnnouncer, MNPendingThreadController, MNErrorToastFactory, MNReadReceiptDisplayController, MNMessageSupplementaryElementFactoryMap, MNMessageSupplementaryViewEventDispatcher, MNInviteToastController, MNMessengerExtensionToastController, MNGlobalDeleteMessagePlaceholderStoreAdapter, MNThreadSummarySubscribingAnnouncer, FBMDeliveryReceiptGating, MNMessageFailureHandlingManager, FBMSendEventLogger, MNRealtimeBannerStore, FBMessageAttachmentPhotoQualityPreparer, MNThreadContextCellController, MNMessageLoadingCellController, MNThreadMontageCellController, MNSecureMessagingServiceProvider, FBAlertViewCoordinator, MNBlockedGroupThreadWarningController, MNMessageSendNotEligibleAlertController, MNAutoContactAdditionController, MNThreadToastCoordinator, MNPushInstructionsController, MNMessagesViewBballGameFeature, MNMessagesViewSoccerGameFeature, MNCDNProfileImageDownloader, MNMessagesViewParticleSystemLogic, MNMessagesTitleViewConfiguration, MNAppThemeConfiguration, MNCollectionViewPreviewingHandler, MNMessagesViewThemeUpdateListeningAnnouncer, MNRideServiceProviderListPresenter, MNStickerStorePresenter, MNEphemeralMessageLifeTimePicker, MNEphemeralMessagingLifetimePicker, MNAdsImpressionLogger, MNPageSubscriptionLogger, MNThreadPhotoViewNodeController, FBExperimentManager, MNEventsReminderActionHandler, MNJoinableGroupPendingApprovalsViewController, MNMessagingQuickReplyStoreService, MNMAIThreadChecker, MNMAISuggestionsCoordinator, MNSaveMessageOutboundClickCoordinator, MNReceiptDetailTextAutoExpandListenerAnnouncer, MNUploadProfilePictureToastController, MNGameListPresenter, MNPhotoImageUploadResultCacher, MNMontageViewModelSubscriptionService, MNGroupsRoomNullStateController, MNMessageCellActionHandler, MNRideServiceSaveAddressManager, MNMontageNavigationCoordinator, FBMLoggedInUserInfoManager, MNThreadImageManager, MNThreadDetailsPageConfiguration, MNUserInfoControllerCoordinator, MNMontageRecentForwardedMessageStoreService, MNGroupsRoomShareBannerController, MNBotNullStateController, MNFoldableAdminMessageCoordinator, MNVideoPlaybackCoordinator, MNMessageCellLayout, MNMessageLiveLocationConfigManager, MNMessagesViewTooltipController, NSString;

@interface MNMessagesViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	NSMutableDictionary* _montageAudienceManagerMap;
	FBUserSession* _session;
	MNMessagesModelController* _messagesModelController;
	id<MNThreadMessagesGenerator> _messageRowGenerator;
	FBMThreadMessageSender* _threadMessageSender;
	FBMThreadMessageSenderListeningAnnouncer* _threadMessageSenderListenerAnnouncer;
	FBMMessageSendListeningAnnouncer* _mesageSendAnnouncer;
	MNMessageCellController* _messageCellController;
	MNComposerTransitionPerfLogger* _composerTransitionPerfLogger;
	MNMessageSendExperienceTracker* _messageSendExperienceTracker;
	MNComposerInteractionCoordinator* _composerInteractionCoordinator;
	MNThreadTypingStateSender* _threadTypingStateSender;
	MNUserSettings* _userSettings;
	FBMobileConfigContextManager* _configManager;
	MNThreadNullStateCTAViewController* _threadNullStateCTAViewController;
	MNSoundController* _soundController;
	MNThreadSoundPlayer* _threadSoundPlayer;
	MNThreadEphemeralitySetter* _ephemeralitySetter;
	MNEphemeralMessagePolicy* _ephemeralMessagePolicy;
	MNEphemeralMessagingMessagesViewCoordinator* _ephemeralMessagingMessagesViewCoordinator;
	MNWebRTCMessagesViewCallController* _rtcCallController;
	MNBotComposerCoordinator* _botComposerCoordinator;
	MNLastActiveBannerController* _lastActiveBannerController;
	id<MNMessageCellRegistration> _cellRegistrar;
	MNMessageSendPerfLogger* _messageSendPerfLogger;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNMessageRawSnippetFormatter* _messageRawSnippetFormatter;
	FBEmoticonTranslator* _emoticonTranslator;
	MNPendingThreadRequestListeningAnnouncer* _pendingThreadAnnouncer;
	MNPendingThreadController* _pendingThreadController;
	MNErrorToastFactory* _errorToastFactory;
	MNReadReceiptDisplayController* _readReceiptDisplayController;
	MNMessageSupplementaryElementFactoryMap* _supplementaryElementFactoryMap;
	MNMessageSupplementaryViewEventDispatcher* _supplementaryViewEventDispatcher;
	MNInviteToastController* _inviteToastController;
	MNMessengerExtensionToastController* _messengerExtensionToastController;
	MNGlobalDeleteMessagePlaceholderStoreAdapter* _placeholderStoreAdapter;
	id<MNPluginManager> _pluginManager;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	FBMDeliveryReceiptGating* _deliveryReceiptGating;
	MNMessageFailureHandlingManager* _messageFailureHandlingManager;
	FBMSendEventLogger* _sendEventLogger;
	MNRealtimeBannerStore* _realtimeBannerStore;
	FBMessageAttachmentPhotoQualityPreparer* _photoQualityPreparer;
	MNThreadContextCellController* _threadContextCellController;
	MNMessageLoadingCellController* _loadingCellController;
	MNThreadMontageCellController* _montageCellController;
	MNSecureMessagingServiceProvider* _secureMessagingServiceProvider;
	id<MNSecureMessagingDeviceInformation> _secureMessagingDeviceInformation;
	FBAlertViewCoordinator* _alertViewCoordinator;
	MNBlockedGroupThreadWarningController* _blockedGroupThreadWarningController;
	MNMessageSendNotEligibleAlertController* _messageSendNotEligibleAlertController;
	MNAutoContactAdditionController* _autoContactAdditionController;
	MNThreadToastCoordinator* _threadToastCoordinator;
	MNPushInstructionsController* _pushInstructionsController;
	MNMessagesViewBballGameFeature* _bballGameFeature;
	MNMessagesViewSoccerGameFeature* _soccerGameFeature;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNMessagesViewParticleSystemLogic* _particleSystemLogic;
	MNMessagesTitleViewConfiguration* _messagesTitleViewConfig;
	MNAppThemeConfiguration* _appThemeConfig;
	MNCollectionViewPreviewingHandler* _collectionViewPreviewingHandler;
	MNMessagesViewThemeUpdateListeningAnnouncer* _messagesViewThemeUpdateAnnouncer;
	MNRideServiceProviderListPresenter* _rideServiceListPresenter;
	id<MNModalPresentation> _modalPresenter;
	MNStickerStorePresenter* _stickerStorePresenter;
	MNEphemeralMessageLifeTimePicker* _messageLifeTimePicker;
	MNEphemeralMessagingLifetimePicker* _ephemeralMessageLifetimePicker;
	MNAdsImpressionLogger* _adsImpressionLogger;
	MNPageSubscriptionLogger* _messengerPageSubscriptionLogger;
	MNThreadPhotoViewNodeController* _threadPhotoViewNodeController;
	FBExperimentManager* _experimentManager;
	MNEventsReminderActionHandler* _eventsReminderActionHandler;
	MNJoinableGroupPendingApprovalsViewController* _joinableGroupPendingApprovalsViewController;
	MNMessagingQuickReplyStoreService* _messagingQuickReplyStore;
	MNMAIThreadChecker* _mAIThreadChecker;
	MNMAISuggestionsCoordinator* _mAISuggestionsCoordinator;
	MNSaveMessageOutboundClickCoordinator* _saveMessageOutboundClickCoordinator;
	MNReceiptDetailTextAutoExpandListenerAnnouncer* _receiptDetailTextAutoExpandListenerAnnouncer;
	MNUploadProfilePictureToastController* _uploadProfilePictureToastController;
	MNGameListPresenter* _gameListPresenter;
	MNPhotoImageUploadResultCacher* _imageUploadResultCacher;
	MNMontageViewModelSubscriptionService* _montageViewModelSubscriptionService;
	MNGroupsRoomNullStateController* _roomNullStateController;
	MNMessageCellActionHandler* _messageCellActionHandler;
	MNRideServiceSaveAddressManager* _addressManager;
	MNMontageNavigationCoordinator* _montageNavigationCoordinator;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNThreadImageManager* _threadImageManager;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	MNThreadDetailsPageConfiguration* _threadDetailsPageConfiguration;
	MNUserInfoControllerCoordinator* _userInfoControllerCoordinator;
	MNMontageRecentForwardedMessageStoreService* _montageRecentForwardedMessageStoreService;
	MNGroupsRoomShareBannerController* _roomShareBannerController;
	MNBotNullStateController* _botNullStateController;
	MNFoldableAdminMessageCoordinator* _foldableAdminMessageCoordinator;
	MNVideoPlaybackCoordinator* _videoPlaybackCoordinator;
	MNMessageCellLayout* _cellLayout;
	MNMessageLiveLocationConfigManager* _liveLocationConfigManager;
	MNMessagesViewTooltipController* _messagesViewTooltipController;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNMessagesModelController * messagesModelController;                                                        //@synthesize messagesModelController=_messagesModelController - In the implementation block
@property (nonatomic,readonly) id<MNThreadMessagesGenerator> messageRowGenerator;                                                          //@synthesize messageRowGenerator=_messageRowGenerator - In the implementation block
@property (nonatomic,readonly) FBMThreadMessageSender * threadMessageSender;                                                               //@synthesize threadMessageSender=_threadMessageSender - In the implementation block
@property (nonatomic,readonly) FBMThreadMessageSenderListeningAnnouncer * threadMessageSenderListenerAnnouncer;                            //@synthesize threadMessageSenderListenerAnnouncer=_threadMessageSenderListenerAnnouncer - In the implementation block
@property (nonatomic,readonly) FBMMessageSendListeningAnnouncer * mesageSendAnnouncer;                                                     //@synthesize mesageSendAnnouncer=_mesageSendAnnouncer - In the implementation block
@property (nonatomic,readonly) MNMessageCellController * messageCellController;                                                            //@synthesize messageCellController=_messageCellController - In the implementation block
@property (nonatomic,readonly) MNComposerTransitionPerfLogger * composerTransitionPerfLogger;                                              //@synthesize composerTransitionPerfLogger=_composerTransitionPerfLogger - In the implementation block
@property (nonatomic,readonly) MNMessageSendExperienceTracker * messageSendExperienceTracker;                                              //@synthesize messageSendExperienceTracker=_messageSendExperienceTracker - In the implementation block
@property (nonatomic,readonly) MNComposerInteractionCoordinator * composerInteractionCoordinator;                                          //@synthesize composerInteractionCoordinator=_composerInteractionCoordinator - In the implementation block
@property (nonatomic,readonly) MNThreadTypingStateSender * threadTypingStateSender;                                                        //@synthesize threadTypingStateSender=_threadTypingStateSender - In the implementation block
@property (nonatomic,readonly) MNUserSettings * userSettings;                                                                              //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                                               //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNThreadNullStateCTAViewController * threadNullStateCTAViewController;                                      //@synthesize threadNullStateCTAViewController=_threadNullStateCTAViewController - In the implementation block
@property (nonatomic,readonly) MNSoundController * soundController;                                                                        //@synthesize soundController=_soundController - In the implementation block
@property (nonatomic,readonly) MNThreadSoundPlayer * threadSoundPlayer;                                                                    //@synthesize threadSoundPlayer=_threadSoundPlayer - In the implementation block
@property (nonatomic,readonly) MNThreadEphemeralitySetter * ephemeralitySetter;                                                            //@synthesize ephemeralitySetter=_ephemeralitySetter - In the implementation block
@property (nonatomic,readonly) MNEphemeralMessagePolicy * ephemeralMessagePolicy;                                                          //@synthesize ephemeralMessagePolicy=_ephemeralMessagePolicy - In the implementation block
@property (nonatomic,readonly) MNEphemeralMessagingMessagesViewCoordinator * ephemeralMessagingMessagesViewCoordinator;                    //@synthesize ephemeralMessagingMessagesViewCoordinator=_ephemeralMessagingMessagesViewCoordinator - In the implementation block
@property (nonatomic,readonly) MNWebRTCMessagesViewCallController * rtcCallController;                                                     //@synthesize rtcCallController=_rtcCallController - In the implementation block
@property (nonatomic,readonly) MNBotComposerCoordinator * botComposerCoordinator;                                                          //@synthesize botComposerCoordinator=_botComposerCoordinator - In the implementation block
@property (nonatomic,readonly) MNLastActiveBannerController * lastActiveBannerController;                                                  //@synthesize lastActiveBannerController=_lastActiveBannerController - In the implementation block
@property (nonatomic,readonly) id<MNMessageCellRegistration> cellRegistrar;                                                                //@synthesize cellRegistrar=_cellRegistrar - In the implementation block
@property (nonatomic,readonly) MNMessageSendPerfLogger * messageSendPerfLogger;                                                            //@synthesize messageSendPerfLogger=_messageSendPerfLogger - In the implementation block
@property (nonatomic,readonly) MNThreadParticipantNameFormatter * nameFormatter;                                                           //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,readonly) MNMessageRawSnippetFormatter * messageRawSnippetFormatter;                                                  //@synthesize messageRawSnippetFormatter=_messageRawSnippetFormatter - In the implementation block
@property (nonatomic,readonly) FBEmoticonTranslator * emoticonTranslator;                                                                  //@synthesize emoticonTranslator=_emoticonTranslator - In the implementation block
@property (nonatomic,readonly) MNPendingThreadRequestListeningAnnouncer * pendingThreadAnnouncer;                                          //@synthesize pendingThreadAnnouncer=_pendingThreadAnnouncer - In the implementation block
@property (nonatomic,readonly) MNPendingThreadController * pendingThreadController;                                                        //@synthesize pendingThreadController=_pendingThreadController - In the implementation block
@property (nonatomic,readonly) MNErrorToastFactory * errorToastFactory;                                                                    //@synthesize errorToastFactory=_errorToastFactory - In the implementation block
@property (nonatomic,readonly) MNReadReceiptDisplayController * readReceiptDisplayController;                                              //@synthesize readReceiptDisplayController=_readReceiptDisplayController - In the implementation block
@property (nonatomic,readonly) MNMessageSupplementaryElementFactoryMap * supplementaryElementFactoryMap;                                   //@synthesize supplementaryElementFactoryMap=_supplementaryElementFactoryMap - In the implementation block
@property (nonatomic,readonly) MNMessageSupplementaryViewEventDispatcher * supplementaryViewEventDispatcher;                               //@synthesize supplementaryViewEventDispatcher=_supplementaryViewEventDispatcher - In the implementation block
@property (nonatomic,readonly) MNInviteToastController * inviteToastController;                                                            //@synthesize inviteToastController=_inviteToastController - In the implementation block
@property (nonatomic,readonly) MNMessengerExtensionToastController * messengerExtensionToastController;                                    //@synthesize messengerExtensionToastController=_messengerExtensionToastController - In the implementation block
@property (nonatomic,readonly) MNGlobalDeleteMessagePlaceholderStoreAdapter * placeholderStoreAdapter;                                     //@synthesize placeholderStoreAdapter=_placeholderStoreAdapter - In the implementation block
@property (nonatomic,readonly) id<MNPluginManager> pluginManager;                                                                          //@synthesize pluginManager=_pluginManager - In the implementation block
@property (nonatomic,readonly) MNThreadSummarySubscribingAnnouncer * threadSummarySubscribingAnnouncer;                                    //@synthesize threadSummarySubscribingAnnouncer=_threadSummarySubscribingAnnouncer - In the implementation block
@property (nonatomic,readonly) FBMDeliveryReceiptGating * deliveryReceiptGating;                                                           //@synthesize deliveryReceiptGating=_deliveryReceiptGating - In the implementation block
@property (nonatomic,readonly) MNMessageFailureHandlingManager * messageFailureHandlingManager;                                            //@synthesize messageFailureHandlingManager=_messageFailureHandlingManager - In the implementation block
@property (nonatomic,readonly) FBMSendEventLogger * sendEventLogger;                                                                       //@synthesize sendEventLogger=_sendEventLogger - In the implementation block
@property (nonatomic,readonly) MNRealtimeBannerStore * realtimeBannerStore;                                                                //@synthesize realtimeBannerStore=_realtimeBannerStore - In the implementation block
@property (nonatomic,readonly) FBMessageAttachmentPhotoQualityPreparer * photoQualityPreparer;                                             //@synthesize photoQualityPreparer=_photoQualityPreparer - In the implementation block
@property (nonatomic,readonly) MNThreadContextCellController * threadContextCellController;                                                //@synthesize threadContextCellController=_threadContextCellController - In the implementation block
@property (nonatomic,readonly) MNMessageLoadingCellController * loadingCellController;                                                     //@synthesize loadingCellController=_loadingCellController - In the implementation block
@property (nonatomic,readonly) MNThreadMontageCellController * montageCellController;                                                      //@synthesize montageCellController=_montageCellController - In the implementation block
@property (nonatomic,readonly) MNSecureMessagingServiceProvider * secureMessagingServiceProvider;                                          //@synthesize secureMessagingServiceProvider=_secureMessagingServiceProvider - In the implementation block
@property (nonatomic,readonly) id<MNSecureMessagingDeviceInformation> secureMessagingDeviceInformation;                                    //@synthesize secureMessagingDeviceInformation=_secureMessagingDeviceInformation - In the implementation block
@property (nonatomic,readonly) FBAlertViewCoordinator * alertViewCoordinator;                                                              //@synthesize alertViewCoordinator=_alertViewCoordinator - In the implementation block
@property (nonatomic,readonly) MNBlockedGroupThreadWarningController * blockedGroupThreadWarningController;                                //@synthesize blockedGroupThreadWarningController=_blockedGroupThreadWarningController - In the implementation block
@property (nonatomic,readonly) MNMessageSendNotEligibleAlertController * messageSendNotEligibleAlertController;                            //@synthesize messageSendNotEligibleAlertController=_messageSendNotEligibleAlertController - In the implementation block
@property (nonatomic,readonly) MNAutoContactAdditionController * autoContactAdditionController;                                            //@synthesize autoContactAdditionController=_autoContactAdditionController - In the implementation block
@property (nonatomic,readonly) MNThreadToastCoordinator * threadToastCoordinator;                                                          //@synthesize threadToastCoordinator=_threadToastCoordinator - In the implementation block
@property (nonatomic,readonly) MNPushInstructionsController * pushInstructionsController;                                                  //@synthesize pushInstructionsController=_pushInstructionsController - In the implementation block
@property (nonatomic,readonly) MNMessagesViewBballGameFeature * bballGameFeature;                                                          //@synthesize bballGameFeature=_bballGameFeature - In the implementation block
@property (nonatomic,readonly) MNMessagesViewSoccerGameFeature * soccerGameFeature;                                                        //@synthesize soccerGameFeature=_soccerGameFeature - In the implementation block
@property (nonatomic,readonly) MNCDNProfileImageDownloader * profileImageDownloader;                                                       //@synthesize profileImageDownloader=_profileImageDownloader - In the implementation block
@property (nonatomic,readonly) MNMessagesViewParticleSystemLogic * particleSystemLogic;                                                    //@synthesize particleSystemLogic=_particleSystemLogic - In the implementation block
@property (nonatomic,readonly) MNMessagesTitleViewConfiguration * messagesTitleViewConfig;                                                 //@synthesize messagesTitleViewConfig=_messagesTitleViewConfig - In the implementation block
@property (nonatomic,readonly) MNAppThemeConfiguration * appThemeConfig;                                                                   //@synthesize appThemeConfig=_appThemeConfig - In the implementation block
@property (nonatomic,readonly) MNCollectionViewPreviewingHandler * collectionViewPreviewingHandler;                                        //@synthesize collectionViewPreviewingHandler=_collectionViewPreviewingHandler - In the implementation block
@property (nonatomic,readonly) MNMessagesViewThemeUpdateListeningAnnouncer * messagesViewThemeUpdateAnnouncer;                             //@synthesize messagesViewThemeUpdateAnnouncer=_messagesViewThemeUpdateAnnouncer - In the implementation block
@property (nonatomic,readonly) MNRideServiceProviderListPresenter * rideServiceListPresenter;                                              //@synthesize rideServiceListPresenter=_rideServiceListPresenter - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                                                                     //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNStickerStorePresenter * stickerStorePresenter;                                                            //@synthesize stickerStorePresenter=_stickerStorePresenter - In the implementation block
@property (nonatomic,readonly) MNEphemeralMessageLifeTimePicker * messageLifeTimePicker;                                                   //@synthesize messageLifeTimePicker=_messageLifeTimePicker - In the implementation block
@property (nonatomic,readonly) MNEphemeralMessagingLifetimePicker * ephemeralMessageLifetimePicker;                                        //@synthesize ephemeralMessageLifetimePicker=_ephemeralMessageLifetimePicker - In the implementation block
@property (nonatomic,readonly) MNAdsImpressionLogger * adsImpressionLogger;                                                                //@synthesize adsImpressionLogger=_adsImpressionLogger - In the implementation block
@property (nonatomic,readonly) MNPageSubscriptionLogger * messengerPageSubscriptionLogger;                                                 //@synthesize messengerPageSubscriptionLogger=_messengerPageSubscriptionLogger - In the implementation block
@property (nonatomic,readonly) MNThreadPhotoViewNodeController * threadPhotoViewNodeController;                                            //@synthesize threadPhotoViewNodeController=_threadPhotoViewNodeController - In the implementation block
@property (nonatomic,readonly) FBExperimentManager * experimentManager;                                                                    //@synthesize experimentManager=_experimentManager - In the implementation block
@property (nonatomic,readonly) MNEventsReminderActionHandler * eventsReminderActionHandler;                                                //@synthesize eventsReminderActionHandler=_eventsReminderActionHandler - In the implementation block
@property (nonatomic,readonly) MNJoinableGroupPendingApprovalsViewController * joinableGroupPendingApprovalsViewController;                //@synthesize joinableGroupPendingApprovalsViewController=_joinableGroupPendingApprovalsViewController - In the implementation block
@property (nonatomic,readonly) MNMessagingQuickReplyStoreService * messagingQuickReplyStore;                                               //@synthesize messagingQuickReplyStore=_messagingQuickReplyStore - In the implementation block
@property (nonatomic,readonly) MNMAIThreadChecker * mAIThreadChecker;                                                                      //@synthesize mAIThreadChecker=_mAIThreadChecker - In the implementation block
@property (nonatomic,readonly) MNMAISuggestionsCoordinator * mAISuggestionsCoordinator;                                                    //@synthesize mAISuggestionsCoordinator=_mAISuggestionsCoordinator - In the implementation block
@property (nonatomic,readonly) MNSaveMessageOutboundClickCoordinator * saveMessageOutboundClickCoordinator;                                //@synthesize saveMessageOutboundClickCoordinator=_saveMessageOutboundClickCoordinator - In the implementation block
@property (nonatomic,readonly) MNReceiptDetailTextAutoExpandListenerAnnouncer * receiptDetailTextAutoExpandListenerAnnouncer;              //@synthesize receiptDetailTextAutoExpandListenerAnnouncer=_receiptDetailTextAutoExpandListenerAnnouncer - In the implementation block
@property (nonatomic,readonly) MNUploadProfilePictureToastController * uploadProfilePictureToastController;                                //@synthesize uploadProfilePictureToastController=_uploadProfilePictureToastController - In the implementation block
@property (nonatomic,readonly) MNGameListPresenter * gameListPresenter;                                                                    //@synthesize gameListPresenter=_gameListPresenter - In the implementation block
@property (nonatomic,readonly) MNPhotoImageUploadResultCacher * imageUploadResultCacher;                                                   //@synthesize imageUploadResultCacher=_imageUploadResultCacher - In the implementation block
@property (nonatomic,readonly) MNMontageViewModelSubscriptionService * montageViewModelSubscriptionService;                                //@synthesize montageViewModelSubscriptionService=_montageViewModelSubscriptionService - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomNullStateController * roomNullStateController;                                                  //@synthesize roomNullStateController=_roomNullStateController - In the implementation block
@property (nonatomic,readonly) MNMessageCellActionHandler * messageCellActionHandler;                                                      //@synthesize messageCellActionHandler=_messageCellActionHandler - In the implementation block
@property (nonatomic,readonly) MNRideServiceSaveAddressManager * addressManager;                                                           //@synthesize addressManager=_addressManager - In the implementation block
@property (nonatomic,readonly) MNMontageNavigationCoordinator * montageNavigationCoordinator;                                              //@synthesize montageNavigationCoordinator=_montageNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                                                       //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                                                                  //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) id<MNInviteEligibilityChecking> inviteEligibilityChecker;                                                   //@synthesize inviteEligibilityChecker=_inviteEligibilityChecker - In the implementation block
@property (nonatomic,readonly) MNThreadDetailsPageConfiguration * threadDetailsPageConfiguration;                                          //@synthesize threadDetailsPageConfiguration=_threadDetailsPageConfiguration - In the implementation block
@property (nonatomic,readonly) MNUserInfoControllerCoordinator * userInfoControllerCoordinator;                                            //@synthesize userInfoControllerCoordinator=_userInfoControllerCoordinator - In the implementation block
@property (nonatomic,readonly) MNMontageRecentForwardedMessageStoreService * montageRecentForwardedMessageStoreService;                    //@synthesize montageRecentForwardedMessageStoreService=_montageRecentForwardedMessageStoreService - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomShareBannerController * roomShareBannerController;                                              //@synthesize roomShareBannerController=_roomShareBannerController - In the implementation block
@property (nonatomic,readonly) MNBotNullStateController * botNullStateController;                                                          //@synthesize botNullStateController=_botNullStateController - In the implementation block
@property (nonatomic,readonly) MNFoldableAdminMessageCoordinator * foldableAdminMessageCoordinator;                                        //@synthesize foldableAdminMessageCoordinator=_foldableAdminMessageCoordinator - In the implementation block
@property (nonatomic,readonly) MNVideoPlaybackCoordinator * videoPlaybackCoordinator;                                                      //@synthesize videoPlaybackCoordinator=_videoPlaybackCoordinator - In the implementation block
@property (nonatomic,readonly) MNMessageCellLayout * cellLayout;                                                                           //@synthesize cellLayout=_cellLayout - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationConfigManager * liveLocationConfigManager;                                             //@synthesize liveLocationConfigManager=_liveLocationConfigManager - In the implementation block
@property (nonatomic,readonly) MNMessagesViewTooltipController * messagesViewTooltipController;                                            //@synthesize messagesViewTooltipController=_messagesViewTooltipController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBExperimentManager *)experimentManager;
-(FBMobileConfigContextManager *)configManager;
-(id<MNModalPresentation>)modalPresenter;
-(MNWebRTCMessagesViewCallController *)rtcCallController;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(MNThreadImageManager *)threadImageManager;
-(MNLastActiveBannerController *)lastActiveBannerController;
-(MNCollectionViewPreviewingHandler *)collectionViewPreviewingHandler;
-(MNRideServiceSaveAddressManager *)addressManager;
-(MNAdsImpressionLogger *)adsImpressionLogger;
-(FBAlertViewCoordinator *)alertViewCoordinator;
-(MNAppThemeConfiguration *)appThemeConfig;
-(MNAutoContactAdditionController *)autoContactAdditionController;
-(MNMessagesViewBballGameFeature *)bballGameFeature;
-(MNBlockedGroupThreadWarningController *)blockedGroupThreadWarningController;
-(MNBotComposerCoordinator *)botComposerCoordinator;
-(MNBotNullStateController *)botNullStateController;
-(MNMessageCellLayout *)cellLayout;
-(id<MNMessageCellRegistration>)cellRegistrar;
-(MNComposerInteractionCoordinator *)composerInteractionCoordinator;
-(MNComposerTransitionPerfLogger *)composerTransitionPerfLogger;
-(FBMDeliveryReceiptGating *)deliveryReceiptGating;
-(FBEmoticonTranslator *)emoticonTranslator;
-(MNEphemeralMessagingLifetimePicker *)ephemeralMessageLifetimePicker;
-(MNEphemeralMessagePolicy *)ephemeralMessagePolicy;
-(MNEphemeralMessagingMessagesViewCoordinator *)ephemeralMessagingMessagesViewCoordinator;
-(MNThreadEphemeralitySetter *)ephemeralitySetter;
-(MNErrorToastFactory *)errorToastFactory;
-(MNEventsReminderActionHandler *)eventsReminderActionHandler;
-(MNFoldableAdminMessageCoordinator *)foldableAdminMessageCoordinator;
-(MNGameListPresenter *)gameListPresenter;
-(MNPhotoImageUploadResultCacher *)imageUploadResultCacher;
-(id<MNInviteEligibilityChecking>)inviteEligibilityChecker;
-(MNInviteToastController *)inviteToastController;
-(MNJoinableGroupPendingApprovalsViewController *)joinableGroupPendingApprovalsViewController;
-(MNMessageLiveLocationConfigManager *)liveLocationConfigManager;
-(MNMessageLoadingCellController *)loadingCellController;
-(MNMAISuggestionsCoordinator *)mAISuggestionsCoordinator;
-(MNMAIThreadChecker *)mAIThreadChecker;
-(FBMMessageSendListeningAnnouncer *)mesageSendAnnouncer;
-(MNMessageCellActionHandler *)messageCellActionHandler;
-(MNMessageCellController *)messageCellController;
-(MNMessageFailureHandlingManager *)messageFailureHandlingManager;
-(MNEphemeralMessageLifeTimePicker *)messageLifeTimePicker;
-(MNMessageRawSnippetFormatter *)messageRawSnippetFormatter;
-(id<MNThreadMessagesGenerator>)messageRowGenerator;
-(MNMessageSendExperienceTracker *)messageSendExperienceTracker;
-(MNMessageSendNotEligibleAlertController *)messageSendNotEligibleAlertController;
-(MNMessageSendPerfLogger *)messageSendPerfLogger;
-(MNMessagesModelController *)messagesModelController;
-(MNMessagesTitleViewConfiguration *)messagesTitleViewConfig;
-(MNMessagesViewThemeUpdateListeningAnnouncer *)messagesViewThemeUpdateAnnouncer;
-(MNMessagesViewTooltipController *)messagesViewTooltipController;
-(MNMessagingQuickReplyStoreService *)messagingQuickReplyStore;
-(MNMessengerExtensionToastController *)messengerExtensionToastController;
-(MNPageSubscriptionLogger *)messengerPageSubscriptionLogger;
-(id)montageAudienceManagerWithIdentifier:(id)arg1 ;
-(MNThreadMontageCellController *)montageCellController;
-(MNMontageNavigationCoordinator *)montageNavigationCoordinator;
-(MNMontageRecentForwardedMessageStoreService *)montageRecentForwardedMessageStoreService;
-(MNMontageViewModelSubscriptionService *)montageViewModelSubscriptionService;
-(id)nonCachedActionSheetPresenter;
-(id)nonCachedBballGameScoreSender;
-(id)nonCachedComposeViewController;
-(id)nonCachedComposingStickerView;
-(id)nonCachedFailedMessageHandlingManager;
-(id)nonCachedMAIActionSender;
-(id)nonCachedManagePageInThreadHandler;
-(id)nonCachedReadonlyThreadBannerViewController;
-(id)nonCachedRequestActionViewController;
-(id)nonCachedSecureThreadBottomBannerViewController;
-(id)nonCachedSecureThreadComposerControlExtensionProvider;
-(id)nonCachedSecureThreadComposerExtensionProvider;
-(id)nonCachedSoccerGameScoreSender;
-(id)nonCachedThreadCustomizationModalPickerController;
-(id)nonCachedThreadDetailsController;
-(id)nonCachedThreadNameEditController;
-(id)nonCachedThreadNicknameEditController;
-(id)nonCachedThreadPhotoEditController;
-(id)nonCachedThreadPhotosViewController;
-(MNMessagesViewParticleSystemLogic *)particleSystemLogic;
-(MNPendingThreadRequestListeningAnnouncer *)pendingThreadAnnouncer;
-(MNPendingThreadController *)pendingThreadController;
-(FBMessageAttachmentPhotoQualityPreparer *)photoQualityPreparer;
-(MNGlobalDeleteMessagePlaceholderStoreAdapter *)placeholderStoreAdapter;
-(MNPushInstructionsController *)pushInstructionsController;
-(MNReadReceiptDisplayController *)readReceiptDisplayController;
-(MNRealtimeBannerStore *)realtimeBannerStore;
-(MNReceiptDetailTextAutoExpandListenerAnnouncer *)receiptDetailTextAutoExpandListenerAnnouncer;
-(MNRideServiceProviderListPresenter *)rideServiceListPresenter;
-(MNGroupsRoomNullStateController *)roomNullStateController;
-(MNGroupsRoomShareBannerController *)roomShareBannerController;
-(MNSaveMessageOutboundClickCoordinator *)saveMessageOutboundClickCoordinator;
-(id<MNSecureMessagingDeviceInformation>)secureMessagingDeviceInformation;
-(MNSecureMessagingServiceProvider *)secureMessagingServiceProvider;
-(FBMSendEventLogger *)sendEventLogger;
-(MNMessagesViewSoccerGameFeature *)soccerGameFeature;
-(MNMessageSupplementaryElementFactoryMap *)supplementaryElementFactoryMap;
-(MNMessageSupplementaryViewEventDispatcher *)supplementaryViewEventDispatcher;
-(MNThreadContextCellController *)threadContextCellController;
-(MNThreadDetailsPageConfiguration *)threadDetailsPageConfiguration;
-(FBMThreadMessageSenderListeningAnnouncer *)threadMessageSenderListenerAnnouncer;
-(MNThreadNullStateCTAViewController *)threadNullStateCTAViewController;
-(MNThreadPhotoViewNodeController *)threadPhotoViewNodeController;
-(MNThreadSoundPlayer *)threadSoundPlayer;
-(MNThreadSummarySubscribingAnnouncer *)threadSummarySubscribingAnnouncer;
-(MNThreadToastCoordinator *)threadToastCoordinator;
-(MNThreadTypingStateSender *)threadTypingStateSender;
-(MNUploadProfilePictureToastController *)uploadProfilePictureToastController;
-(MNUserInfoControllerCoordinator *)userInfoControllerCoordinator;
-(MNVideoPlaybackCoordinator *)videoPlaybackCoordinator;
-(MNCDNProfileImageDownloader *)profileImageDownloader;
-(id)nonCachedNavigationCoordinator;
-(MNStickerStorePresenter *)stickerStorePresenter;
-(FBMThreadMessageSender *)threadMessageSender;
-(MNThreadParticipantNameFormatter *)nameFormatter;
-(MNSoundController *)soundController;
-(FBUserSession *)session;
-(MNUserSettings *)userSettings;
-(id<MNPluginManager>)pluginManager;
@end

