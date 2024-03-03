#pragma once

namespace _interaction {

class Interaction {
   protected:
    uint32_t id_;
    uint8_t type_;
    uint8_t status_bit_mask;

   public:
    Interaction();
    Interaction(uint32_t id, uint8_t type);
    ~Interaction();

    void setId(uint32_t id_);
    void setType(uint8_t type_);
    void setStatus(uint8_t status_bit_mask);

    uint32_t getId();
    uint8_t getType();
    uint8_t getStatus();

    bool isInteraction();
    void playInteraction();
    bool isInteractionEnded();
    void enableInteraction();
    void disableInteraction();
}

}  // namespace _interaction